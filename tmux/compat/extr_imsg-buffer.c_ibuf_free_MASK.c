
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibuf {int size; int buf; } ;


 int FUNC_0 (struct ibuf*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct ibuf *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_1(VAR_0->buf, VAR_0->size);
 FUNC_0(VAR_0);
}
