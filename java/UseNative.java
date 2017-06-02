public class UseNative
{

	static {
		System.loadLibrary("native");
	}

	private native static void cppfunc();

	public static void write() {
		System.out.println("Java called from C++");
	}

	public static void main(String[] args) {
		System.out.println("Java says!");
		cppfunc();
	}
}
