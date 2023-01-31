Write a C/C++ POSIX compliant program that prints the POSIX defined Configuration options supported on any given system using feature test macros.
#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include&lt;iostream&gt;
#include&lt;unistd.h&gt;
int main()
{
using namespace std;
#ifdef _POSIX_JOB_CONTROL
cout&lt;&lt;&quot;System Supports Job Control feature&quot;&lt;&lt;endl;
#else
cout&lt;&lt;&quot;System doesnot support job control\n&quot;;
#endif
#ifdef _POSIX_SAVED_IDS
cout&lt;&lt;&quot;System Supports saved set-UID and saved set-GID&quot;&lt;&lt;endl;
#else
cout&lt;&lt;&quot;System doesnot support saved set-UID\n&quot;;
#endif
#ifdef _POSIX_CHOWN_RESTRICTED
cout&lt;&lt;&quot;System Supports Change Ownership feature:&quot;&lt;&lt;endl;
#else
cout&lt;&lt;&quot;System doesnot support change Ownership feature\n&quot;;
#endif
#ifdef _POSIX_NO_TRUNC
cout&lt;&lt;&quot;System Supports Path truncation option:&quot;&lt;&lt;endl;
#else
cout&lt;&lt;&quot;System doesnot support Path truncation \n&quot;;
#endif
#ifdef _POSIX_VDISABLE
cout&lt;&lt;&quot;System Supports Disable Character for files:&quot;&lt;&lt;endl;
#else
cout&lt;&lt;&quot;System doesnot support Disable Characters \n&quot;;
#endif
return 0;
