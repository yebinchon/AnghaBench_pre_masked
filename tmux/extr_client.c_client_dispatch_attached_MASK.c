
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {int sa_handler; int sa_flags; int sa_mask; } ;
struct TYPE_2__ {size_t len; int type; } ;
struct imsg {char* data; TYPE_1__ hdr; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;





 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sigaction*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int *,int ) ;
 int FUNC_7 (int ,struct sigaction*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 void* FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(struct imsg *VAR_18)
{
 struct sigaction VAR_19;
 char *VAR_20;
 ssize_t VAR_21;

 VAR_20 = VAR_18->data;
 VAR_21 = VAR_18->hdr.len - VAR_4;

 switch (VAR_18->hdr.type) {
 case 135:
 case 134:
  if (VAR_21 == 0 || VAR_20[VAR_21 - 1] != '\0')
   FUNC_1("bad MSG_DETACH string");

  VAR_13 = FUNC_11(VAR_20);
  VAR_14 = VAR_18->hdr.type;
  if (VAR_18->hdr.type == 134)
   VAR_12 = VAR_1;
  else
   VAR_12 = VAR_0;
  FUNC_6(VAR_16, VAR_5, -1, ((void*)0), 0);
  break;
 case 133:
  if (VAR_21 == 0 || VAR_20[VAR_21 - 1] != '\0' ||
      FUNC_9(VAR_20) + 1 == (size_t)VAR_21)
   FUNC_1("bad MSG_EXEC string");
  VAR_10 = FUNC_11(VAR_20);
  VAR_11 = FUNC_11(VAR_20 + FUNC_9(VAR_20) + 1);

  VAR_14 = VAR_18->hdr.type;
  FUNC_6(VAR_16, VAR_5, -1, ((void*)0), 0);
  break;
 case 132:
  if (VAR_21 != 0 && VAR_21 != sizeof (int))
   FUNC_1("bad MSG_EXIT size");

  FUNC_6(VAR_16, VAR_5, -1, ((void*)0), 0);
  VAR_12 = VAR_2;
  break;
 case 131:
  if (VAR_21 != 0)
   FUNC_1("bad MSG_EXITED size");

  FUNC_5(VAR_17);
  break;
 case 129:
  if (VAR_21 != 0)
   FUNC_1("bad MSG_SHUTDOWN size");

  FUNC_6(VAR_16, VAR_5, -1, ((void*)0), 0);
  VAR_12 = VAR_3;
  VAR_15 = 1;
  break;
 case 128:
  if (VAR_21 != 0)
   FUNC_1("bad MSG_SUSPEND size");

  FUNC_4(&VAR_19, 0, sizeof VAR_19);
  FUNC_8(&VAR_19.sa_mask);
  VAR_19.sa_flags = VAR_7;
  VAR_19.sa_handler = VAR_9;
  if (FUNC_7(VAR_8, &VAR_19, ((void*)0)) != 0)
   FUNC_0("sigaction failed");
  FUNC_3(FUNC_2(), VAR_8);
  break;
 case 130:
  if (VAR_21 == 0 || VAR_20[VAR_21 - 1] != '\0')
   FUNC_1("bad MSG_LOCK string");

  FUNC_10(VAR_20);
  FUNC_6(VAR_16, VAR_6, -1, ((void*)0), 0);
  break;
 }
}
