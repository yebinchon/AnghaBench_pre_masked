
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int isUnlocked; int zFilename; int hShm; scalar_t__ isReadonly; } ;
typedef TYPE_1__ unixShmNode ;
typedef int unixFile ;
struct flock {int l_len; scalar_t__ l_type; int l_start; int l_whence; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,struct flock*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_5(unixFile *VAR_11, unixShmNode *VAR_12){
  struct flock VAR_13;
  int VAR_14 = VAR_8;
  VAR_13.l_whence = VAR_4;
  VAR_13.l_start = VAR_10;
  VAR_13.l_len = 1;
  VAR_13.l_type = VAR_3;
  if( FUNC_1(VAR_12->hShm, VAR_0, &VAR_13)!=0 ) {
    VAR_14 = VAR_6;
  }else if( VAR_13.l_type==VAR_2 ){
    if( VAR_12->isReadonly ){
      VAR_12->isUnlocked = 1;
      VAR_14 = VAR_9;
    }else{
      VAR_14 = FUNC_4(VAR_11, VAR_3, VAR_10, 1);





      if( VAR_14==VAR_8 && FUNC_2(VAR_12->hShm, 3) ){
        VAR_14 = FUNC_3(VAR_7,"ftruncate",VAR_12->zFilename);
      }
    }
  }else if( VAR_13.l_type==VAR_3 ){
    VAR_14 = VAR_5;
  }

  if( VAR_14==VAR_8 ){
    FUNC_0( VAR_13.l_type==VAR_2 || VAR_13.l_type==VAR_1 );
    VAR_14 = FUNC_4(VAR_11, VAR_1, VAR_10, 1);
  }
  return VAR_14;
}
