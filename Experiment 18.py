import numpy as np

# -------- 1D Array --------
arr1 = np.array([1, 2, 3, 4, 5])
print("1D Array:", arr1)

# -------- 2D Array --------
arr2 = np.array([[1, 2, 3],
                 [4, 5, 6]])
print("\n2D Array:\n", arr2)

# -------- 3D Array --------
arr3 = np.array([[[1, 2], [3, 4]],
                 [[5, 6], [7, 8]]])
print("\n3D Array:\n", arr3)

# -------- Reshaping --------
reshaped = arr1.reshape(5, 1)
print("\nReshaped Array (5x1):\n", reshaped)

# -------- Slicing --------
print("\nSlicing:")
print("1D Slice:", arr1[1:4])          
print("2D Slice:\n", arr2[:, 1:3])     

# -------- Indexing --------
print("\nIndexing:")
print("arr1[2] =", arr1[2])
print("arr2[1][2] =", arr2[1][2])
print("arr3[1][0][1] =", arr3[1][0][1])
