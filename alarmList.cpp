#include "alarmList.h"

//#include "ticpp/tinyxml.h"
#include "ticpp/ticpp.h"

alarmList::alarmList()
{
    //ctor

}

alarmList::~alarmList()
{
    //dtor
}


bool alarmList::SaveList()
{
    TiXmlDocument xmlConfig;

    TiXmlDeclaration *pXMLDeclaration = new TiXmlDeclaration( "1.0", "UTF-8", "" );//����XML�ļ���ʽ
    TiXmlElement * pXMLAppName = new TiXmlElement( "wxAlarm" );
    TiXmlElement * pXMLFileVersion = new TiXmlElement( "FileVersion" );//�����Զ�����ļ���ʽ�汾
    pXMLFileVersion->SetAttribute("major", 1);
    pXMLFileVersion->SetAttribute("minor", 0);


    TiXmlElement * pXMLAlarmList = new TiXmlElement( "alarmList" );
    TiXmlElement * pXMLAlarmItem = new TiXmlElement( "alarmItem" );

    {
        time_t rawtime;
        rawtime=time(NULL);//��ȡ��ǰʱ��
        //char buffer [80];
        //vsprintf(buffer, "%il", (long)rawtime);
        wxString wxbuffer;
        wxbuffer.Printf(wxT("%il"),rawtime);//time_t(long)ת��Ϊlong���ı���ʽ
        //TiXmlText * text = new TiXmlText( "World" );
        //TiXmlText * text = new TiXmlText( wxbuffer.char_str() );//wxString��ʽת��Ϊc_char�ı���ʽ�����洢��XML�ڵ�

        pXMLAlarmItem->SetAttribute("description", "xml������");
        pXMLAlarmItem->SetAttribute("alarmTime", wxbuffer.char_str());//wxString��ʽת��Ϊc_char�ı���ʽ�����洢��XML�ڵ�
        bool repeatTest = true;
        pXMLAlarmItem->SetAttribute("repeat", repeatTest);
        pXMLAlarmItem->SetAttribute("repeatRange", wxbuffer.char_str());
        pXMLAlarmItem->SetAttribute("memo", "��ע��������");
    }

    //��������������XML�����ļ���
    xmlConfig.LinkEndChild( pXMLDeclaration );
    xmlConfig.LinkEndChild( pXMLAppName );
    pXMLAppName->LinkEndChild( pXMLFileVersion );
    pXMLAppName->LinkEndChild( pXMLAlarmList );
    pXMLAlarmList->LinkEndChild( pXMLAlarmItem );

    //����XML�����ļ�
    xmlConfig.SaveFile( "wxAlarm.xml" );
    //////////////////////
    return true;
}

bool alarmList::ReloadList()
{
    ticpp::Document xmlConfig;
    xmlConfig.LoadFile("wxAlarm.xml", TIXML_ENCODING_UTF8);//��XML�����ڴ�

    ticpp::Element * pWxAlarmElem = xmlConfig.FirstChildElement("wxAlarm");//��λ<wxAlarm>��
    ticpp::Element * pAlarmListElem = pWxAlarmElem->FirstChildElement("alarmList");//��λ<alarmList>��

    /*
    //ticpp::Element * pAlarmItemElem = pAlarmListElem->FirstChildElement("alarmItem");//��λ<alarmList>��
    std::string attr;
    pAlarmItemElem->GetAttribute( "description", &attr );

    wxMessageBox(wxT("alarmItem"));
    */

    ticpp::Iterator< ticpp::Element > child;
    for ( child = child.begin( pAlarmListElem ); child != child.end(); child++ )//ѭ������<alarmList>���ӿ�
    {
        std::string attr;
        child->GetAttribute( "description", &attr );//��ȡdescriptionֵ
        wxMessageBox(wxT("alarmItem"));
    }


    return true;
}
