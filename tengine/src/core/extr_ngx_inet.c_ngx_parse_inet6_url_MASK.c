
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_16__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_9__ sin6_addr; void* sin6_port; void* sin6_family; } ;
struct TYPE_14__ {int sockaddr; } ;
struct TYPE_13__ {size_t len; char* data; } ;
struct TYPE_12__ {int len; char* data; } ;
struct TYPE_11__ {int len; char* data; } ;
struct TYPE_10__ {char* data; size_t len; } ;
struct TYPE_15__ {int socklen; char* err; int last_port; void* port; int no_port; void* default_port; int wildcard; TYPE_5__ sockaddr; void* family; TYPE_4__ host; TYPE_3__ port_text; scalar_t__ listen; TYPE_2__ uri; int uri_part; TYPE_1__ url; } ;
typedef TYPE_6__ ngx_url_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
typedef void* in_port_t ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_9__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (char*,size_t,int ) ;
 int FUNC_4 (int *,TYPE_6__*,int *,int,int) ;
 char* FUNC_5 (char*,char*,char) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_pool_t *VAR_3, ngx_url_t *VAR_4)
{
    VAR_4->err = "the INET6 sockets are not supported on this platform";

    return VAR_1;


}
