
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct _buf {int * vp; } ;
typedef struct _buf _buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct _buf*) ;
 struct _buf* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int ,int ,int,int **,int ,int ) ;

struct _buf *
FUNC_4(const char *VAR_3)
{
 struct _buf *VAR_4;
 vnode_t *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(sizeof (_buf_t), FUNC_2(VAR_1));
 if (VAR_4 == ((void*)0))
  return ((_buf_t *)-1UL);

 if ((VAR_6 = FUNC_3(VAR_3, VAR_2, VAR_0, 0644, &VAR_5, 0, 0))) {
  FUNC_0(VAR_4);
  return ((_buf_t *)-1UL);
 }

 VAR_4->vp = VAR_5;

 return (VAR_4);
}
