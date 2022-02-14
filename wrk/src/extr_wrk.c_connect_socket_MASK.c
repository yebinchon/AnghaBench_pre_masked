
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int connect; } ;
struct TYPE_10__ {TYPE_2__ errors; struct aeEventLoop* loop; struct addrinfo* addr; } ;
typedef TYPE_3__ thread ;
struct aeEventLoop {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int flags ;
struct TYPE_8__ {TYPE_4__* data; } ;
struct TYPE_11__ {int fd; TYPE_1__ parser; } ;
typedef TYPE_4__ connection ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct aeEventLoop*,int,int,int ,TYPE_4__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int ,int ,int*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_6(thread *VAR_11, connection *VAR_12) {
    struct addrinfo *VAR_13 = VAR_11->addr;
    struct aeEventLoop *VAR_14 = VAR_11->loop;
    int VAR_15, VAR_16;

    VAR_15 = FUNC_5(VAR_13->ai_family, VAR_13->ai_socktype, VAR_13->ai_protocol);

    VAR_16 = FUNC_3(VAR_15, VAR_4, 0);
    FUNC_3(VAR_15, VAR_5, VAR_16 | VAR_7);

    if (FUNC_2(VAR_15, VAR_13->ai_addr, VAR_13->ai_addrlen) == -1) {
        if (VAR_9 != VAR_3) goto error;
    }

    VAR_16 = 1;
    FUNC_4(VAR_15, VAR_6, VAR_8, &VAR_16, sizeof(VAR_16));

    VAR_16 = VAR_1 | VAR_2;
    if (FUNC_0(VAR_14, VAR_15, VAR_16, VAR_10, VAR_12) == VAR_0) {
        VAR_12->parser.data = VAR_12;
        VAR_12->fd = VAR_15;
        return VAR_15;
    }

  error:
    VAR_11->errors.connect++;
    FUNC_1(VAR_15);
    return -1;
}
