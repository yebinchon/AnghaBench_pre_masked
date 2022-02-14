
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int end; } ;


 int FUNC_0 (struct scatterlist*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct scatterlist *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, 0, VAR_1 * sizeof (struct scatterlist));
 VAR_0[VAR_1 - 1].end = 1;
}
