export interface IRobotMessage
{
    /**
     * Description of data being transported
     **/
    description: string;

    /**
     * A Command to execute at the ROBOT.
     **/
    command: string; 

    /**
     * When the command was triggered.
     */
    when: Date;
}