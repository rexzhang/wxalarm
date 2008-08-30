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

    time_t remainderTime;//剩余时间,存储时不保存此项，此项由alarmTime与当前时间运算而得
    string description;//提醒内容
    bool repeat;//自动循环
    time_t alarmTime;//到期时间
    string memo;//备注

protected:


private:



};

#endif // ALARMITEM_H
