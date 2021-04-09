#include <stdio.h>
#include <unistd.h>
#include <string>
#include <cassert>
#include <cstdbool>
#include <QFile>

bool copyFile(const char *src, const char *dest, bool failIfExists)
{
   if (QFile::exists(dest))
   {
      if (failIfExists)
      {
         return false;
      }
      else
      {
         QFile::remove(dest);
      }
   }
   QFile::copy(src, dest);
   return true;
}

#define BUF_SIZE 1000
int main(void)
{
   char buf[BUF_SIZE];
   char cwd[BUF_SIZE];
   getcwd(cwd, BUF_SIZE);

   printf("CWD is %s\n",cwd);
   char file1[] = "test1";
   char file2[] = "test2";

   strncat(cwd, "/", 2);
   strncat(cwd, file1, BUF_SIZE);
   printf("File1 is %s\n",cwd);
   //bool ret = copyFile(src, dest, TRUE);
}
