
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scan_io_t ;
typedef int dva_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,int *,int *,int *,int *,int *,int ) ;
 int * VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_3 ;

void
FUNC_2(void)
{
 VAR_1 = VAR_3;

 for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  char VAR_5[36];

  (void) FUNC_1(VAR_5, "sio_cache_%d", VAR_4);
  VAR_2[VAR_4] = FUNC_0(VAR_5,
      (sizeof (scan_io_t) + ((VAR_4 + 1) * sizeof (dva_t))),
      0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);
 }
}
