
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; int ai_flags; } ;
typedef int strport ;
struct TYPE_4__ {int sock; int err; } ;
typedef TYPE_1__ Connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int ,int ,int *,int *,int *,int *) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *,int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_11 ;
 int FUNC_5 (struct addrinfo*) ;
 int FUNC_6 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;

int
FUNC_11(Connection *VAR_12, const char *VAR_13, const char *VAR_14, int VAR_15)
{
 char VAR_16[6];
 struct addrinfo *VAR_17, VAR_18 = {
  .ai_family = VAR_0,
  .ai_socktype = VAR_8,
 };
 int VAR_19;

 if (((void*)0) == VAR_14 && (VAR_15 <= 0 || VAR_15 > VAR_6))
 {
  FUNC_7(VAR_4);
  return -1;
 }


 if (VAR_15 > 0 && VAR_15 <= VAR_6)
 {
  FUNC_8(VAR_16, sizeof(VAR_16), "%d", VAR_15);
  VAR_14 = VAR_16;
  VAR_18.ai_flags = VAR_1;
 }


 VAR_19 = FUNC_6(VAR_13, VAR_14, &VAR_18, &VAR_17);

 if (VAR_19 != 0)
 {
  VAR_19 = VAR_7;
  VAR_11 = VAR_3;

  goto out;
 }
 VAR_19 = VAR_12->sock = FUNC_9(VAR_17->ai_family, VAR_17->ai_socktype, VAR_17->ai_protocol);


 if (FUNC_0(VAR_19))
  goto out_addrinfo;





 if (FUNC_10(VAR_12, VAR_2) < 0)
 {
  VAR_19 = VAR_7;
  goto out_addrinfo;
 }





 VAR_19 = FUNC_4(VAR_12->sock, VAR_17->ai_addr, VAR_17->ai_addrlen);


out_addrinfo:
 FUNC_5(VAR_17);

out:
 if (FUNC_0(VAR_19))
 {
  VAR_12->err = VAR_19;
  return -1;
 }

 return 0;
}
