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

    //����Ϊ��Ҫ���浽XML�е���Ŀ
    string description;//��������
    time_t alarmTime;//����ʱ��

    bool repeat;//�Զ�ѭ��
    time_t repeatRange;//�Զ�ѭ����ʱ�䳤��

    string memo;//��ע

protected:


private:



};

#endif // ALARMITEM_H
