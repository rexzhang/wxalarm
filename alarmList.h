#ifndef ALARMLIST_H
#define ALARMLIST_H

#include "alarmItem.h"

#include <list>
//using std::list;

class alarmList
{
public:
    alarmList();
    virtual ~alarmList();

protected:

private:
    std::list<alarmItem> m_alarmList;

};


#endif // ALARMLIST_H
