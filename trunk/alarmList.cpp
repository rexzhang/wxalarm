#include "alarmList.h"

#include "ticpp/tinyxml.h"

alarmList::alarmList()
{
    //ctor
    TiXmlDocument doc;
    TiXmlDeclaration * decl = new TiXmlDeclaration( "1.0", "", "" );
    TiXmlElement * element = new TiXmlElement( "Hello" );
    TiXmlText * text = new TiXmlText( "World" );
    element->LinkEndChild( text );
    doc.LinkEndChild( decl );
    doc.LinkEndChild( element );

    time_t rawtime;
    rawtime=time(NULL);//  time ( &rawtime );

    struct tm * timeinfo;
    char buffer [80];

    timeinfo = localtime ( &rawtime );

    strftime (buffer,80,"Now is %I:%M%p.",timeinfo);
    //puts (buffer);

    string tempString;


    //element->SetAttribute("timeTest", time_t<rawtime>);


    //TiXmlElement * elementTime = new TiXmlElement( "Hello" );

    doc.SaveFile( "test.xml" );

    //////////////////////


}

alarmList::~alarmList()
{
    //dtor
}
