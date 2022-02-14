
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct timeval*,int *) ;
 char* FUNC_5 (size_t) ;
 int VAR_7 ;
 int FUNC_6 (char*,int ,int) ;
 char* VAR_8 ;
 int FUNC_7 (char*) ;
 size_t FUNC_8 (char*,size_t,char*,char*,int) ;
 int VAR_9 ;
 double FUNC_9 (struct timeval*,struct timeval*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(void)
{
 int VAR_10, VAR_11;
 char *VAR_12 = ((void*)0);
 struct timeval VAR_13, VAR_14;
 double VAR_15;
 size_t VAR_16;

 VAR_16 = VAR_4;
 VAR_12 = FUNC_5(VAR_16);
 if (VAR_12 == ((void*)0)) {
  VAR_11 = VAR_2;
  FUNC_0("Error %d: malloc(%d) bytes for file name\n", VAR_11,
      VAR_4);
  goto out;
 }

 (void) FUNC_4(&VAR_13, ((void*)0));

 for (VAR_10 = 1; VAR_10 <= VAR_6; VAR_10++) {
  if (FUNC_8(VAR_12, VAR_16, "%s/file-%d", VAR_8, VAR_10) >= VAR_16) {
   VAR_11 = VAR_0;
   FUNC_0("Error %d: path too long\n", VAR_11);
   goto out;
  }

  if (VAR_7 && ((VAR_10 % VAR_7) == 0))
   FUNC_2(VAR_9, "create: %s\n", VAR_12);

  VAR_11 = FUNC_10(VAR_12);
  if ((VAR_11 == -1) && (VAR_5 != VAR_1)) {
   FUNC_0("Error %d: unlink(%s)\n", VAR_5, VAR_12);
   VAR_11 = VAR_5;
   goto out;
  }

  VAR_11 = FUNC_6(VAR_12, VAR_3, 0644);
  if (VAR_11 == -1) {
   FUNC_0("Error %d: open(%s, O_CREATE, 0644)\n",
       VAR_5, VAR_12);
   VAR_11 = VAR_5;
   goto out;
  }

  VAR_11 = FUNC_1(VAR_11);
  if (VAR_11 == -1) {
   FUNC_0("Error %d: close(%d)\n", VAR_5, VAR_11);
   VAR_11 = VAR_5;
   goto out;
  }
 }

 (void) FUNC_4(&VAR_14, ((void*)0));
 VAR_15 = FUNC_9(&VAR_14, &VAR_13);
 FUNC_2(VAR_9, "create:   %f seconds %f creates/second\n",
     VAR_15, VAR_6 / VAR_15);

 VAR_11 = FUNC_7("post");
out:
 if (VAR_12)
  FUNC_3(VAR_12);

 return (VAR_11);
}
