
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long position; } ;
struct TYPE_3__ {unsigned long position; } ;
struct chunk_header {TYPE_2__ new; TYPE_1__ old; } ;


 int FUNC_0 (struct chunk_header*,char const*) ;

bool
FUNC_1(unsigned long *VAR_0, const char *VAR_1, int VAR_2)
{
 struct chunk_header VAR_3;

 *VAR_0 = 0;

 if (!FUNC_0(&VAR_3, VAR_1))
  return 0;

 *VAR_0 = VAR_2 == '-' ? VAR_3.old.position : VAR_3.new.position;
 return 1;
}
