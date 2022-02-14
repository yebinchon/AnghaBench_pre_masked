
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpmtmr {int dummy; } ;
struct vm {struct vpmtmr* vpmtmr; } ;



struct vpmtmr *
FUNC_0(struct vm *VAR_0)
{

 return (VAR_0->vpmtmr);
}
