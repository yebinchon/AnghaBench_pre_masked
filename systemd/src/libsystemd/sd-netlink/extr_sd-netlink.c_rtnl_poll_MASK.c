
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef scalar_t__ uint64_t ;
struct timespec {int dummy; } ;
struct pollfd {int events; int fd; } ;
struct TYPE_6__ {int fd; } ;
typedef TYPE_1__ sd_netlink ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pollfd*,int,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*) ;
 int * FUNC_5 (struct timespec*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(sd_netlink *VAR_4, bool VAR_5, uint64_t VAR_6) {
        struct pollfd VAR_7[1] = {};
        struct timespec VAR_8;
        usec_t VAR_9 = VAR_2;
        int VAR_10, VAR_11;

        FUNC_0(VAR_4);

        VAR_11 = FUNC_3(VAR_4);
        if (VAR_11 < 0)
                return VAR_11;

        if (VAR_5)


                VAR_11 |= VAR_1;
        else {
                usec_t VAR_12;



                VAR_10 = FUNC_4(VAR_4, &VAR_12);
                if (VAR_10 < 0)
                        return VAR_10;
                if (VAR_10 > 0) {
                        usec_t VAR_13;
                        VAR_13 = FUNC_1(VAR_0);
                        VAR_9 = VAR_12 > VAR_13 ? VAR_12 - VAR_13 : 0;
                }
        }

        if (VAR_6 != (uint64_t) -1 && (VAR_9 == (uint64_t) -1 || VAR_6 < VAR_9))
                VAR_9 = VAR_6;

        VAR_7[0].fd = VAR_4->fd;
        VAR_7[0].events = VAR_11;

        VAR_10 = FUNC_2(VAR_7, 1, VAR_9 == (uint64_t) -1 ? ((void*)0) : FUNC_5(&VAR_8, VAR_9), ((void*)0));
        if (VAR_10 < 0)
                return -VAR_3;

        return VAR_10 > 0 ? 1 : 0;
}
