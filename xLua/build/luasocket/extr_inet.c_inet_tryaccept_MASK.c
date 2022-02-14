
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_sockaddr_storage ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
typedef int socklen_t ;
typedef int p_timeout ;
typedef int p_socket ;
typedef int SA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int*,int ) ;
 char const* FUNC_1 (int ) ;

const char *FUNC_2(p_socket VAR_1, int VAR_2, p_socket VAR_3,
    p_timeout VAR_4)
{
 socklen_t VAR_5;
 t_sockaddr_storage VAR_6;
 if (VAR_2 == VAR_0) {
  VAR_5 = sizeof(struct sockaddr_in6);
 } else {
  VAR_5 = sizeof(struct sockaddr_in);
 }
 return FUNC_1(FUNC_0(VAR_1, VAR_3, (SA *) &VAR_6,
        &VAR_5, VAR_4));
}
