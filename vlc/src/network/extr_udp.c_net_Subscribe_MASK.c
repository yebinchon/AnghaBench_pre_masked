
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct ipv6_mreq {int imr_multiaddr; int ipv6mr_interface; int ipv6mr_multiaddr; int gr_group; int gr_interface; } ;
struct ip_mreq {int imr_multiaddr; int ipv6mr_interface; int ipv6mr_multiaddr; int gr_group; int gr_interface; } ;
struct group_req {int imr_multiaddr; int ipv6mr_interface; int ipv6mr_multiaddr; int gr_group; int gr_interface; } ;
typedef scalar_t__ socklen_t ;
typedef int ipv6mr ;
typedef int imr ;
typedef int gr ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int *,struct sockaddr const*,scalar_t__) ;
 int FUNC_2 (struct ipv6_mreq*,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int,int,int ,struct ipv6_mreq*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(vlc_object_t *VAR_8, int VAR_9,
                         const struct sockaddr *VAR_10, socklen_t VAR_11)
{
    switch (VAR_10->sa_family)
    {
        default:
            VAR_6 = VAR_0;
    }


    FUNC_3 (VAR_8, "cannot join multicast group: %s",
             FUNC_6(VAR_7));
    return -1;
}
