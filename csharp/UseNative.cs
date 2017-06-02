using System.Runtime.InteropServices;
using System;

public class UseNative
{
	[DllImport("watisdis.dll")]
	static extern IntPtr createstuff(Int32 number, string str);

	[DllImport("native.dll",EntryPoint="getstuffstr")]
	static extern IntPtr gimmiethestring(IntPtr stuff);

	[DllImport("native.dll")]
	static extern void printstuff(IntPtr stuff);

	[DllImport("native.dll")]
	static extern void deletestuff(IntPtr stuff);

	public static void Main()
	{
		IntPtr stuff = createstuff(100, "bum!");
		printstuff(stuff);
		System.Console.WriteLine(Marshal.PtrToStringAnsi(gimmiethestring(stuff)));
		deletestuff(stuff);		
	}
}
