
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct tty {int term_flags; TYPE_1__* client; TYPE_2__* term; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int *,int *,int *) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (struct tty*,int ,int) ;
 int FUNC_3 (struct tty*,int ,int ,int ,int ) ;
 int FUNC_4 (struct tty*,char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (char*,int,char*,char const*,int) ;

__attribute__((used)) static int
FUNC_7(struct tty *VAR_8, int VAR_9, const char *VAR_10)
{
 u_char VAR_11, VAR_12, VAR_13;
 char VAR_14[32];

 if (VAR_9 & VAR_0) {
  if ((VAR_8->term_flags & VAR_2) ||
      FUNC_5(VAR_8->term, VAR_3))
   goto fallback_256;





  if (VAR_8->term->flags & VAR_2) {
   if (*VAR_10 == '3') {
    if (!FUNC_5(VAR_8->term, VAR_5))
     goto fallback_256;
    FUNC_2(VAR_8, VAR_5, VAR_9 & 0xff);
   } else {
    if (!FUNC_5(VAR_8->term, VAR_4))
     goto fallback_256;
    FUNC_2(VAR_8, VAR_4, VAR_9 & 0xff);
   }
   return (0);
  }
  goto fallback_256;
 }

 if (VAR_9 & VAR_1) {
  if (*VAR_10 == '3') {
   if (!FUNC_5(VAR_8->term, VAR_7))
    return (-1);
   FUNC_0(VAR_9 & 0xffffff, &VAR_11, &VAR_12, &VAR_13);
   FUNC_3(VAR_8, VAR_7, VAR_11, VAR_12, VAR_13);
  } else {
   if (!FUNC_5(VAR_8->term, VAR_6))
    return (-1);
   FUNC_0(VAR_9 & 0xffffff, &VAR_11, &VAR_12, &VAR_13);
   FUNC_3(VAR_8, VAR_6, VAR_11, VAR_12, VAR_13);
  }
  return (0);
 }

 return (-1);

fallback_256:
 FUNC_6(VAR_14, sizeof VAR_14, "\033[%s;5;%dm", VAR_10, VAR_9 & 0xff);
 FUNC_1("%s: 256 colour fallback: %s", VAR_8->client->name, VAR_14);
 FUNC_4(VAR_8, VAR_14);
 return (0);
}
