
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int ngx_uint_t ;
typedef int ngx_msec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct timespec*) ;

__attribute__((used)) static ngx_msec_t
FUNC_1(time_t VAR_3, ngx_uint_t VAR_4)
{
    return (ngx_msec_t) VAR_3 * 1000 + VAR_4;
}
