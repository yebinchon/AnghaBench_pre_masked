
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct sockaddr_in6 {int sin6_scope_id; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct ip_mreq_source {int imr_sourceaddr; int imr_multiaddr; int gsr_group; int gsr_source; int gsr_interface; } ;
struct group_source_req {int imr_sourceaddr; int imr_multiaddr; int gsr_group; int gsr_source; int gsr_interface; } ;
typedef scalar_t__ socklen_t ;
typedef int imr ;
typedef int gsr ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,struct sockaddr const*,scalar_t__) ;
 int FUNC_2 (struct ip_mreq_source*,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,struct sockaddr const*,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int,int,int ,struct ip_mreq_source*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9 (vlc_object_t *VAR_7, int VAR_8,
                     const struct sockaddr *VAR_9, socklen_t VAR_10,
                     const struct sockaddr *VAR_11, socklen_t VAR_12)
{
    if (VAR_9->sa_family != VAR_11->sa_family)
    {
        VAR_5 = VAR_0;
        return -1;
    }

    switch (VAR_11->sa_family)
    {
        default:
            VAR_5 = VAR_0;
    }


    FUNC_3 (VAR_7, "cannot join source multicast group: %s",
             FUNC_8(VAR_6));
    FUNC_4 (VAR_7, "trying ASM instead of SSM...");
    return FUNC_5 (VAR_7, VAR_8, VAR_11, VAR_12);
}
