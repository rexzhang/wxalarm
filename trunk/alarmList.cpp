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

    TiXmlDeclaration *pXMLDeclaration = new TiXmlDeclaration( "1.0", "UTF-8", "" );//定义XML文件格式
    TiXmlElement * pXMLAppName = new TiXmlElement( "wxAlarm" );
    TiXmlElement * pXMLFileVersion = new TiXmlElement( "FileVersion" );//定义自定义的文件格式版本
    pXMLFileVersion->SetAttribute("major", 1);
    pXMLFileVersion->SetAttribute("minor", 0);


    TiXmlElement * pXMLAlarmList = new TiXmlElement( "alarmList" );
    TiXmlElement * pXMLAlarmItem = new TiXmlElement( "alarmItem" );

    {
        time_t rawtime;
        rawtime=time(NULL);//获取当前时间
        //char buffer [80];
        //vsprintf(buffer, "%il", (long)rawtime);
        wxString wxbuffer;
        wxbuffer.Printf(wxT("%il"),rawtime);//time_t(long)转换为long的文本格式
        //TiXmlText * text = new TiXmlText( "World" );
        //TiXmlText * text = new TiXmlText( wxbuffer.char_str() );//wxString格式转换为c_char文本格式，并存储到XML节点

        pXMLAlarmItem->SetAttribute("description", "xml测试项");
        pXMLAlarmItem->SetAttribute("alarmTime", wxbuffer.char_str());//wxString格式转换为c_char文本格式，并存储到XML节点
        bool repeatTest = true;
        pXMLAlarmItem->SetAttribute("repeat", repeatTest);
        pXMLAlarmItem->SetAttribute("repeatRange", wxbuffer.char_str());
        pXMLAlarmItem->SetAttribute("memo", "备注测试内容");
    }

    //连接生成完整的XML配置文件树
    xmlConfig.LinkEndChild( pXMLDeclaration );
    xmlConfig.LinkEndChild( pXMLAppName );
    pXMLAppName->LinkEndChild( pXMLFileVersion );
    pXMLAppName->LinkEndChild( pXMLAlarmList );
    pXMLAlarmList->LinkEndChild( pXMLAlarmItem );

    //保存XML配置文件
    xmlConfig.SaveFile( "wxAlarm.xml" );
    //////////////////////
    return true;
}

bool alarmList::ReloadList()
{
    ticpp::Document xmlConfig;
    xmlConfig.LoadFile("wxAlarm.xml", TIXML_ENCODING_UTF8);//吧XML载入内存

    ticpp::Element * pWxAlarmElem = xmlConfig.FirstChildElement("wxAlarm");//定位<wxAlarm>块
    ticpp::Element * pAlarmListElem = pWxAlarmElem->FirstChildElement("alarmList");//定位<alarmList>块

    /*
    //ticpp::Element * pAlarmItemElem = pAlarmListElem->FirstChildElement("alarmItem");//定位<alarmList>块
    std::string attr;
    pAlarmItemElem->GetAttribute( "description", &attr );

    wxMessageBox(wxT("alarmItem"));
    */

    ticpp::Iterator< ticpp::Element > child;
    for ( child = child.begin( pAlarmListElem ); child != child.end(); child++ )//循环遍历<alarmList>的子块
    {
        std::string attr;
        child->GetAttribute( "description", &attr );//获取description值
        wxMessageBox(wxT("alarmItem"));
    }


    return true;
}
