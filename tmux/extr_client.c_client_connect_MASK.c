
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct event_base {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct sockaddr_un*,int ,int) ;
 int FUNC_6 (int ,struct event_base*,int,char*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 size_t FUNC_10 (int ,char const*,int) ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 (char**,char*,char const*) ;

__attribute__((used)) static int
FUNC_13(struct event_base *VAR_7, const char *VAR_8, int VAR_9)
{
 struct sockaddr_un VAR_10;
 size_t VAR_11;
 int VAR_12, VAR_13 = -1, VAR_14 = 0;
 char *VAR_15 = ((void*)0);

 FUNC_5(&VAR_10, 0, sizeof VAR_10);
 VAR_10.sun_family = VAR_0;
 VAR_11 = FUNC_10(VAR_10.sun_path, VAR_8, sizeof VAR_10.sun_path);
 if (VAR_11 >= sizeof VAR_10.sun_path) {
  VAR_6 = VAR_2;
  return (-1);
 }
 FUNC_4("socket is %s", VAR_8);

retry:
 if ((VAR_12 = FUNC_8(VAR_0, VAR_4, 0)) == -1)
  return (-1);

 FUNC_4("trying connect");
 if (FUNC_2(VAR_12, (struct sockaddr *)&VAR_10, sizeof VAR_10) == -1) {
  FUNC_4("connect failed: %s", FUNC_9(VAR_6));
  if (VAR_6 != VAR_1 && VAR_6 != VAR_3)
   goto failed;
  if (!VAR_9)
   goto failed;
  FUNC_1(VAR_12);

  if (!VAR_14) {
   FUNC_12(&VAR_15, "%s.lock", VAR_8);
   if ((VAR_13 = FUNC_0(VAR_15)) < 0) {
    FUNC_4("didn't get lock (%d)", VAR_13);

    FUNC_3(VAR_15);
    VAR_15 = ((void*)0);

    if (VAR_13 == -2)
     goto retry;
   }
   FUNC_4("got lock (%d)", VAR_13);







   VAR_14 = 1;
   goto retry;
  }

  if (VAR_13 >= 0 && FUNC_11(VAR_8) != 0 && VAR_6 != VAR_3) {
   FUNC_3(VAR_15);
   FUNC_1(VAR_13);
   return (-1);
  }
  VAR_12 = FUNC_6(VAR_5, VAR_7, VAR_13, VAR_15);
 }

 if (VAR_14 && VAR_13 >= 0) {
  FUNC_3(VAR_15);
  FUNC_1(VAR_13);
 }
 FUNC_7(VAR_12, 0);
 return (VAR_12);

failed:
 if (VAR_14) {
  FUNC_3(VAR_15);
  FUNC_1(VAR_13);
 }
 FUNC_1(VAR_12);
 return (-1);
}
