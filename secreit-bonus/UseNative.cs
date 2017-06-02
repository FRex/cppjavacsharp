using System.Runtime.InteropServices;
using System;

public class UseNative
{
	[DllImport("hehe.dll")]
	static extern void dewItt();

	public static void Main()
	{
		dewItt();
	}
}
