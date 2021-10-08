#include <iostream>

using namespace std;

class Log
{
    public:
        enum Lever
        {
            leverError,
            leverWarn,
            leverInfo
        };
    private:
        Lever m_loglevel=leverInfo;
    public:
        void SetLogLevel(Lever lever)
        {
            m_loglevel = lever;
    }
    void Warn(const char* message){
        if(m_loglevel>=leverWarn)
            cout <<"[Warn] "<< message << endl;
    }
    void Error(const char* message){
        if(m_loglevel>=leverError)
            cout <<"[Error] "<<message << endl;
    }
    void Info(const char* message){
        if(m_loglevel>=leverInfo)
            cout <<"[Info] "<< message << endl;
    }
};
int main(){
    Log log;
    log.SetLogLevel(Log::leverWarn);
    log.Warn("hello");
    log.Error("hello");
    log.Info("hello");
    return 0;
}