/* scheduler_tool_impl.h

 Generated by phxrpc_pb2tool from scheduler.proto

*/

#pragma once

#include <cstdio>

#include "phxrpc_scheduler_tool.h"


namespace phxrpc {


class OptMap;


}


class SchedulerToolImpl : public SchedulerTool {
  public:
    SchedulerToolImpl();
    virtual ~SchedulerToolImpl();

    virtual int PHXEcho(phxrpc::OptMap &opt_map) override;

    virtual int GetAddrScale(phxrpc::OptMap &opt_map) override;

};
