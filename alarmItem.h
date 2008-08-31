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

    //以下为需要保存到XML中的项目
    string description;//提醒内容
    time_t alarmTime;//到期时间

    bool repeat;//自动循环
    time_t repeatRange;//自动循环的时间长度

    string memo;//备注

protected:


private:



};

#endif // ALARMITEM_H
