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

    bool SaveList();//���������б�retrun=1�ɹ���=0ʧ��
    bool ReloadList();//����װ�������б�retrun=1�ɹ���=0ʧ��

protected:

private:
    std::list<alarmItem> m_alarmList;

};


#endif // ALARMLIST_H
