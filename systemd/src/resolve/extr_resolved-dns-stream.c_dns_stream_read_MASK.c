
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int fd; scalar_t__ encrypted; } ;
typedef TYPE_1__ DnsStream ;


 scalar_t__ FUNC_0 (TYPE_1__*,void*,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(DnsStream *VAR_1, void *VAR_2, size_t VAR_3) {
        ssize_t VAR_4;






        {
                VAR_4 = FUNC_1(VAR_1->fd, VAR_2, VAR_3);
                if (VAR_4 < 0)
                        return -VAR_0;
        }

        return VAR_4;
}
