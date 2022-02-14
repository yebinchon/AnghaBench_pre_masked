
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zstream_t ;
struct TYPE_4__ {int * zf_dnode; int zf_lock; int zf_stream; } ;
typedef TYPE_1__ zfetch_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(zfetch_t *VAR_0)
{
 zstream_t *VAR_1;

 FUNC_4(&VAR_0->zf_lock);
 while ((VAR_1 = FUNC_2(&VAR_0->zf_stream)) != ((void*)0))
  FUNC_0(VAR_0, VAR_1);
 FUNC_5(&VAR_0->zf_lock);
 FUNC_1(&VAR_0->zf_stream);
 FUNC_3(&VAR_0->zf_lock);

 VAR_0->zf_dnode = ((void*)0);
}
