
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct stat {scalar_t__ st_rdev; } ;
struct kinfo_proc {scalar_t__ ki_tdev; int ki_comm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kinfo_proc* FUNC_0 (struct kinfo_proc*,struct kinfo_proc*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct kinfo_proc*) ;
 int FUNC_2 (int*) ;
 struct kinfo_proc* FUNC_3 (struct kinfo_proc*,size_t) ;
 int FUNC_4 (char*,struct stat*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,struct kinfo_proc*,size_t*,int *,int ) ;
 int FUNC_7 (int) ;

char *
FUNC_8(int VAR_5, char *VAR_6)
{
 int VAR_7[4] = { VAR_0, VAR_2, VAR_3, 0 };
 struct stat VAR_8;
 size_t VAR_9;
 struct kinfo_proc *VAR_10, *VAR_11, *VAR_12;
 u_int VAR_13;
 char *VAR_14;

 VAR_10 = ((void*)0);

 if (FUNC_4(VAR_6, &VAR_8) == -1)
  return (((void*)0));
 if ((VAR_7[3] = FUNC_7(VAR_5)) == -1)
  return (((void*)0));

retry:
 if (FUNC_6(VAR_7, FUNC_2(VAR_7), ((void*)0), &VAR_9, ((void*)0), 0) == -1)
  return (((void*)0));
 VAR_9 = (VAR_9 * 5) / 4;

 if ((VAR_11 = FUNC_3(VAR_10, VAR_9)) == ((void*)0))
  goto error;
 VAR_10 = VAR_11;

 if (FUNC_6(VAR_7, FUNC_2(VAR_7), VAR_10, &VAR_9, ((void*)0), 0) == -1) {
  if (VAR_4 == VAR_1)
   goto retry;
  goto error;
 }

 VAR_12 = ((void*)0);
 for (VAR_13 = 0; VAR_13 < VAR_9 / sizeof (struct kinfo_proc); VAR_13++) {
  if (VAR_10[VAR_13].ki_tdev != VAR_8.st_rdev)
   continue;
  if (VAR_12 == ((void*)0))
   VAR_12 = &VAR_10[VAR_13];
  else
   VAR_12 = FUNC_0(&VAR_10[VAR_13], VAR_12);
 }

 VAR_14 = ((void*)0);
 if (VAR_12 != ((void*)0))
  VAR_14 = FUNC_5(VAR_12->ki_comm);

 FUNC_1(VAR_10);
 return (VAR_14);

error:
 FUNC_1(VAR_10);
 return (((void*)0));
}
