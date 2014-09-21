/*

Name: Jobair Hassan
Date: May 23, 2014
Description: Implementing the binary search recursive algorithm in C++.

*/

#define KEY_NOT_FOUND -1




int binarySearchRecursive(int A[], int key, int imin, int imax){

	if (imax < 0 || imin < 0 || imin > imax){
		return KEY_NOT_FOUND;
	}

	int imid = (imax + imin) / 2;

	if (A[imid] == key){
		return imid;
	}

	else if (A[imid] > key) {
		return binarySearchRecursive(A, key, imin, imid - 1);
	}

	else {
		return binarySearchRecursive(A, key, imid + 1, imax);
	}

	return KEY_NOT_FOUND;
}
