#ifndef ALARMITEM_H
#define ALARMITEM_H

#include <ctime>

#include <string>
using std::string;

class alarmItem
{
public:
    alarmItem();
    virtual ~alarmItem();

    time_t remainderTime;//ʣ��ʱ��,�洢ʱ��������������alarmTime�뵱ǰʱ���������
    string description;//��������
    bool repeat;//�Զ�ѭ��
    time_t alarmTime;//����ʱ��
    string memo;//��ע

protected:


private:



};

#endif // ALARMITEM_H
