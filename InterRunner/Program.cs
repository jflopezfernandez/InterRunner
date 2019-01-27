
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace InterRunner
{
    public static class Program
    {
        public static class MessageBoxNotification
        {
            [DllImport("user32.dll")]
            public static extern int MessageBox(IntPtr hWnd, string text, string caption, int type);
        }

        public static class Directory
        {
            [DllImport("kernel32.dll")]
            public static extern int GetWindowsDirectory(StringBuilder sb, int maxChars);
        }

        [DllImport("winwrp.dll")]
        public static extern int CreateNewFile([MarshalAs(UnmanagedType.LPWStr)] string FileName);

        public static void Main()
        {
            Console.WriteLine("Enter a name for the new file:");
            var NewFileName = Console.ReadLine();
            CreateNewFile(NewFileName);
        }
    }
}
