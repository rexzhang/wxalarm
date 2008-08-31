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

    bool SaveList();//保存闹钟列表：retrun=1成功，=0失败
    bool ReloadList();//重新装入闹钟列表：retrun=1成功，=0失败

protected:

private:
    std::list<alarmItem> m_alarmList;

};


#endif // ALARMLIST_H
