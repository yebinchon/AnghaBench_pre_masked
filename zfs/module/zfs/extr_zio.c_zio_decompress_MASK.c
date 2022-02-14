
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ io_error; int io_size; int io_abd; int io_bp; } ;
typedef TYPE_1__ zio_t ;
typedef int uint64_t ;
typedef int abd_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,void*,int ) ;
 int FUNC_4 (int ,int ,void*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(zio_t *VAR_3, abd_t *VAR_4, uint64_t VAR_5)
{
 if (VAR_3->io_error == 0) {
  void *VAR_6 = FUNC_2(VAR_4, VAR_5);
  int VAR_7 = FUNC_4(FUNC_0(VAR_3->io_bp),
      VAR_3->io_abd, VAR_6, VAR_3->io_size, VAR_5);
  FUNC_3(VAR_4, VAR_6, VAR_5);

  if (VAR_2 && VAR_7 == 0)
   VAR_7 = FUNC_5(VAR_3, VAR_0);

  if (VAR_7 != 0)
   VAR_3->io_error = FUNC_1(VAR_1);
 }
}
