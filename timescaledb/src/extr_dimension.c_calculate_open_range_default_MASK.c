
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_4__ {int interval_length; int id; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef int DimensionSlice ;
typedef TYPE_2__ Dimension ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int,int) ;

__attribute__((used)) static DimensionSlice *
FUNC_1(Dimension *VAR_2, int64 VAR_3)
{
 int64 VAR_4, VAR_5;

 if (VAR_3 < 0)
 {
  VAR_5 = ((VAR_3 + 1) / VAR_2->fd.interval_length) * VAR_2->fd.interval_length;


  if (VAR_1 - VAR_5 > -VAR_2->fd.interval_length)
  {
   VAR_4 = VAR_1;
  }
  else
  {
   VAR_4 = VAR_5 - VAR_2->fd.interval_length;
  }
 }
 else
 {
  VAR_4 = (VAR_3 / VAR_2->fd.interval_length) * VAR_2->fd.interval_length;


  if (VAR_0 - VAR_4 < VAR_2->fd.interval_length)
  {
   VAR_5 = VAR_0;
  }
  else
  {
   VAR_5 = VAR_4 + VAR_2->fd.interval_length;
  }
 }

 return FUNC_0(VAR_2->fd.id, VAR_4, VAR_5);
}
