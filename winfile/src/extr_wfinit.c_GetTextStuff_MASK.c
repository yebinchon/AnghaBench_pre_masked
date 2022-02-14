
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {scalar_t__ cy; int cx; } ;
struct TYPE_5__ {scalar_t__ tmMaxCharWidth; } ;
typedef TYPE_1__ TEXTMETRIC ;
typedef TYPE_2__ SIZE ;
typedef int HDC ;


 int FUNC_0 (int ,int ,int,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_3 (scalar_t__,scalar_t__) ;

VOID
FUNC_4(HDC VAR_9)
{
   SIZE VAR_10;
   TEXTMETRIC VAR_11;

   FUNC_0(VAR_9, FUNC_2("W"), 1, &VAR_10);

   VAR_2 = VAR_10.cx;
   VAR_8 = VAR_10.cy;
   FUNC_1(VAR_9, &VAR_11);




   VAR_0 = VAR_1 + VAR_11.tmMaxCharWidth + (4*VAR_3);
   VAR_4 = FUNC_3(VAR_5 + (4*VAR_3), VAR_8);
   VAR_6 = FUNC_3(VAR_8, VAR_7);
}
