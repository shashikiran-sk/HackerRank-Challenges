/**
 * 
 */

/**
 * @author Shashi Kiran S
 *
 */
public class paths_in_matrix {

	/**
	 * @param args
	 */
	static int n=8;
	private boolean[][] board=new boolean[n][n];
	long numPaths=0;
	paths_in_matrix(){
		for (int i = 0; i < n; i++) {
		    for (int j = 0; j < n; j++) {
		    	board[i][j]=false;
		    }
		}
	}
	private void togglePiece(int i,int j){
		this.board[i][j]=!this.board[i][j];
	}
	private boolean hasBeenVisited(int i,int j){
		return this.board[i][j];
	}
	private boolean exists(int i,int j){
		return i < n && i > -1 && j < n && j > -1;
	}
	private boolean viablePosition(int i,int j){
		return exists(i, j) && !hasBeenVisited(i,j);
	}
	private void traversePaths(int i,int j){
		//BASE CASE: if reached (n - 1, n - 1), count as solution and stop doing work
		//printmat();
	    if (i == (n - 1) && j == (n - 1)) {
	      this.numPaths++;
	      return;
	    }
	    this.togglePiece(i, j);
	    //RECURSIVE CASE: if next point is a viable position, go there and make the same decision

	    //go right if possible
	    if (this.viablePosition(i, j + 1)) {
	      traversePaths(i, j + 1);
	    }
	  //go left if possible
	    if (this.viablePosition(i, j - 1)) {
	      traversePaths( i, j - 1);
	    }

	    //go down if possible
	    if (this.viablePosition(i + 1, j)) {
	      traversePaths( i + 1, j);
	    }

	    //go up if possible
	    if (this.viablePosition(i - 1, j)) {
	      traversePaths(i - 1, j);
	    }

	    //reset the board back to the way you found it after you've gone forward so that other paths can see it as a viable position for their routes
	    this.togglePiece(i, j);

	}
	private long robotPaths(){
		
		traversePaths(0,0);
		return this.numPaths;
	}
//	private void printmat(){
//		for (int i = 0; i < n; i++) {
//		    for (int j = 0; j < n; j++) {
//		    	System.out.print(board[i][j] + " ");
//		    }
//		    System.out.print("\n");
//		}
//		System.out.print("------------------------\n");
//	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		paths_in_matrix mat=new paths_in_matrix();
		System.out.println(mat.robotPaths());
	}

}
/*
 * A robot is located in the upper-left corner of a 4×4 grid. The robot can move either up, down, left, or right, but cannot go to the same location twice. The robot is trying to reach the lower-right corner of the grid. Your task is to find out the number of unique ways to reach the destination.

INPUT SAMPLE:

There is no input for this program.

OUTPUT SAMPLE:

Print out the number of unique ways for the robot to reach its destination. The number should be printed out as an integer ≥0.
*/
