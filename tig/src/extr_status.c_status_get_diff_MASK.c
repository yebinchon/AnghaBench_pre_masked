
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* name; void* mode; int rev; } ;
struct TYPE_3__ {scalar_t__* name; void* mode; int rev; } ;
struct status {char status; TYPE_2__ new; TYPE_1__ old; } ;


 int FUNC_0 (int ,char const*) ;
 void* FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static inline bool
FUNC_2(struct status *VAR_0, const char *VAR_1, size_t VAR_2)
{
 const char *VAR_3 = VAR_1 + 1;
 const char *VAR_4 = VAR_1 + 8;
 const char *VAR_5 = VAR_1 + 15;
 const char *VAR_6 = VAR_1 + 56;
 const char *VAR_7 = VAR_1 + 97;

 if (VAR_2 < 98 ||
     VAR_3[-1] != ':' ||
     VAR_4[-1] != ' ' ||
     VAR_5[-1] != ' ' ||
     VAR_6[-1] != ' ' ||
     VAR_7[-1] != ' ')
  return 0;

 VAR_0->status = *VAR_7;

 FUNC_0(VAR_0->old.rev, VAR_5);
 FUNC_0(VAR_0->new.rev, VAR_6);

 VAR_0->old.mode = FUNC_1(VAR_3, ((void*)0), 8);
 VAR_0->new.mode = FUNC_1(VAR_4, ((void*)0), 8);

 VAR_0->old.name[0] = VAR_0->new.name[0] = 0;

 return 1;
}
