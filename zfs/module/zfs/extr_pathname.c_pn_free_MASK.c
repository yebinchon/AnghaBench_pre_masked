
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathname {scalar_t__ pn_pathlen; int * pn_path; scalar_t__ pn_bufsize; int * pn_buf; } ;


 int FUNC_0 (int *,scalar_t__) ;

void
FUNC_1(struct pathname *VAR_0)
{

 FUNC_0(VAR_0->pn_buf, VAR_0->pn_bufsize);
 VAR_0->pn_buf = ((void*)0);
 VAR_0->pn_bufsize = 0;




}
