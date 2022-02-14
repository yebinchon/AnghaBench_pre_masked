
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct ifreq {char* ifr_name; int ifr_addr; } ;
struct TYPE_3__ {size_t len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (int ,int ,int ) ;

ngx_int_t
FUNC_4(ngx_str_t VAR_5, struct sockaddr_in *VAR_6)
{
    int VAR_7;
    struct ifreq VAR_8;

    if((VAR_7 = FUNC_3(VAR_0, VAR_4, 0)) < 0) {
        return VAR_1;
    }

    FUNC_2(VAR_8.ifr_name, VAR_5.data, VAR_5.len);
    VAR_8.ifr_name[VAR_5.len] ='\0';

    if(FUNC_1(VAR_7, VAR_3, &VAR_8) < 0) {
        FUNC_0(VAR_7);
        return VAR_1;
    }

    *VAR_6 = *((struct sockaddr_in *) &VAR_8.ifr_addr);

    FUNC_0(VAR_7);
    return VAR_2;
}
