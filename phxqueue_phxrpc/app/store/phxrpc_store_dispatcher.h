/* phxrpc_store_dispatcher.h

 Generated by phxrpc_pb2service from store.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include "phxrpc/http.h"
#include "phxrpc/rpc.h"


class StoreService;


class StoreDispatcher {
  public:
    static const phxrpc::HttpDispatcher< StoreDispatcher >::URIFuncMap &GetURIFuncMap();

    StoreDispatcher(StoreService &service, phxrpc::DispatcherArgs_t *dispatcher_args);

    ~StoreDispatcher();

    int PHXEcho(const phxrpc::HttpRequest &request, phxrpc::HttpResponse *response);

    int Add(const phxrpc::HttpRequest &request, phxrpc::HttpResponse *response);

    int Get(const phxrpc::HttpRequest &request, phxrpc::HttpResponse *response);

  private:
    StoreService &service_;
    phxrpc::DispatcherArgs_t *dispatcher_args_;
};
