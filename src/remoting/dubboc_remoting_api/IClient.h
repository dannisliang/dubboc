//
// Created by 云海 on 2017/3/26.
//

#ifndef DUBBOC_ICLIENT_H
#define DUBBOC_ICLIENT_H

#include "IEndpoint.h"
#include "IChannel.h"
#include <common/IResetable.h>

namespace DUBBOC {
    namespace REMOTING {
        using  namespace DUBBOC::COMMON;

        class IClient : virtual public IEndpoint, public IChannel ,public IResetable{
        public:
            virtual void reconnect() = 0;
        };
    }
}
#endif //DUBBOC_ICLIENT_H
