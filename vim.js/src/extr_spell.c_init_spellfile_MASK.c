
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ char_u ;
struct TYPE_14__ {scalar_t__ ga_len; } ;
struct TYPE_13__ {TYPE_2__* lp_slang; } ;
struct TYPE_8__ {scalar_t__* b_p_spl; } ;
struct TYPE_12__ {TYPE_1__ b_s; } ;
struct TYPE_11__ {TYPE_3__* w_s; } ;
struct TYPE_10__ {scalar_t__* b_p_spl; TYPE_7__ b_langp; } ;
struct TYPE_9__ {scalar_t__* sl_fname; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (TYPE_7__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int VAR_4 ;
 scalar_t__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__**,scalar_t__*,scalar_t__,char*) ;
 TYPE_5__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*) ;
 scalar_t__* VAR_7 ;
 int FUNC_6 (scalar_t__*,long,scalar_t__*,int ) ;
 scalar_t__* FUNC_7 () ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__*,int) ;
 int FUNC_12 (char*,scalar_t__,char*,...) ;
 int * FUNC_13 (scalar_t__*,scalar_t__) ;
 int FUNC_14 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_15()
{
    char_u *VAR_8;
    int VAR_9;
    char_u *VAR_10;
    char_u *VAR_11;
    char_u *VAR_12;
    int VAR_13 = VAR_0;
    char_u *VAR_14 = VAR_5->b_s.b_p_spl;

    if (*VAR_6->w_s->b_p_spl != VAR_2 && VAR_6->w_s->b_langp.ga_len > 0)
    {
 VAR_8 = FUNC_2(VAR_1);
 if (VAR_8 == ((void*)0))
     return;



 for (VAR_12 = VAR_6->w_s->b_p_spl; *VAR_12 != VAR_2
   && FUNC_13((char_u *)",._", *VAR_12) == ((void*)0); ++VAR_12)
     if (FUNC_10(*VAR_12))
     {
  VAR_13 = VAR_4;
  VAR_14 = VAR_12 + 1;
     }



 VAR_11 = VAR_7;
 while (*VAR_11 != VAR_2)
 {
     if (VAR_13)


  FUNC_14(VAR_8, VAR_5->b_s.b_p_spl,
         VAR_14 - VAR_5->b_s.b_p_spl - 1);
     else

  FUNC_3(&VAR_11, VAR_8, VAR_1, ",");
     if (FUNC_4(VAR_8) == 2)
     {


  if (VAR_13)
      FUNC_14(VAR_8, VAR_5->b_s.b_p_spl,
        VAR_12 - VAR_5->b_s.b_p_spl);
  else
  {

      VAR_9 = (int)FUNC_1(VAR_8);
      FUNC_12((char *)VAR_8 + VAR_9, VAR_1 - VAR_9, "/spell");
      if (FUNC_4(VAR_8) != 2)
   FUNC_11(VAR_8, 0755);

      VAR_9 = (int)FUNC_1(VAR_8);
      FUNC_12((char *)VAR_8 + VAR_9, VAR_1 - VAR_9,
     "/%.*s", (int)(VAR_12 - VAR_14), VAR_14);
  }
  VAR_9 = (int)FUNC_1(VAR_8);
  VAR_10 = FUNC_0(VAR_6->w_s->b_langp, 0)
        ->lp_slang->sl_fname;
  FUNC_12((char *)VAR_8 + VAR_9, VAR_1 - VAR_9, ".%s.add",
   VAR_10 != ((void*)0)
     && FUNC_8((char *)FUNC_5(VAR_10), ".ascii.") != ((void*)0)
           ? (char_u *)"ascii" : FUNC_7());
  FUNC_6((char_u *)"spellfile", 0L, VAR_8, VAR_3);
  break;
     }
     VAR_13 = VAR_0;
 }

 FUNC_9(VAR_8);
    }
}
