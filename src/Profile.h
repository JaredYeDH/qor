#ifndef _PROFILE_H_4UYYSMKF
#define _PROFILE_H_4UYYSMKF

#include <string>
#include <unordered_map>
#include <jsoncpp/json/json.h>
#include "Input.h"

class Session;

class Profile
{
    public:
        Profile(
            unsigned int id,
            Session* session,
            Input* input,
            const std::string& fn
        );
        virtual ~Profile() {}
        
        std::shared_ptr<Controller> controller() { return m_pController; }

        const Json::Value& json() const { return m_Json; }
        Json::Value& json() { return m_Json; }

    private:

        unsigned int m_ID;
        Session* m_pSession;
        std::unordered_map<std::string,std::string> m_Binds;
        std::shared_ptr<Controller> m_pController;

        Json::Value m_Json;
};

#endif

