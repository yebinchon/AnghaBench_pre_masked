
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int vdev_children; char* vdev_path; struct TYPE_4__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;


 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,char) ;
 unsigned int FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static vdev_t *
FUNC_5(vdev_t *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 unsigned VAR_5;

 if (VAR_0 == ((void*)0))
  return (((void*)0));


 VAR_5 = FUNC_4(VAR_1, &VAR_2, 10);
 if (VAR_2 == VAR_1 || (VAR_2 && *VAR_2 != '.' && *VAR_2 != '\0'))
  goto name;
 if (VAR_5 >= VAR_0->vdev_children)
  return (((void*)0));

 VAR_0 = VAR_0->vdev_child[VAR_5];
 if (VAR_2 && *VAR_2 == '\0')
  return (VAR_0);
 return (FUNC_5(VAR_0, VAR_2+1));

name:
 for (VAR_5 = 0; VAR_5 < VAR_0->vdev_children; VAR_5++) {
  vdev_t *VAR_6 = VAR_0->vdev_child[VAR_5];

  if (VAR_6->vdev_path == ((void*)0)) {
   VAR_6 = FUNC_5(VAR_6, VAR_1);
   if (VAR_6 == ((void*)0))
    continue;
   else
    return (VAR_6);
  }

  VAR_3 = FUNC_3(VAR_6->vdev_path, '/');
  VAR_3 = VAR_3 ? VAR_3 + 1 : VAR_6->vdev_path;
  VAR_4 = &VAR_6->vdev_path[FUNC_1(VAR_6->vdev_path) - 2];

  if (FUNC_0(VAR_6->vdev_path, VAR_1) == 0)
   return (VAR_6);
  if (FUNC_0(VAR_3, VAR_1) == 0)
   return (VAR_6);
  if (FUNC_0(VAR_4, "s0") == 0 && FUNC_2(VAR_3, VAR_1, VAR_4 - VAR_3) == 0)
   return (VAR_6);
 }

 return (((void*)0));
}
